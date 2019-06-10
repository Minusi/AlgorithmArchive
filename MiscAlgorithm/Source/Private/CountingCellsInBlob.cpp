#include "CountingCellsInBlob.h"
#include "MiscAlgorithm.h"




#define IMAGE_HR_MAX 8
#define IMAGE_VT_MAX 8

enum PixelType
{
	BACKGROUND_PIXEL = 0,
	IMAGE_PIXEL = 1,
	CHECKED_PIXEL = - 1
};

static char BinaryImage[IMAGE_VT_MAX][IMAGE_HR_MAX] =
{
	1,0,0,0,0,0,0,1,
	0,1,1,0,0,1,0,0,
	1,1,0,0,1,0,1,0,
	0,0,0,0,0,1,0,0,
	0,1,0,1,0,1,0,0,
	0,1,0,1,0,1,0,0,
	1,0,0,0,1,0,0,1,
	0,1,1,0,0,1,1,1
};



int FindBlobAndCell(int x, int y)
{
	if (x >= IMAGE_HR_MAX || x < 0
		|| y >= IMAGE_VT_MAX || y < 0)
	{
		ALG_LOG("(%d,%d) : 0, 유효하지 않은 인덱스", x, y);
		return 0;
	}

	if (BinaryImage[y][x] == IMAGE_PIXEL)
	{
		BinaryImage[y][x] = CHECKED_PIXEL;
		return
			FindBlobAndCell(x, y - 1) + FindBlobAndCell(x + 1, y - 1) +
			FindBlobAndCell(x + 1, y) + FindBlobAndCell(x + 1, y + 1) +
			FindBlobAndCell(x, y + 1) + FindBlobAndCell(x - 1, y + 1) +
			FindBlobAndCell(x - 1, y) + FindBlobAndCell(x - 1, y - 1) +
			1;
	}
	else if (BinaryImage[y][x] == BACKGROUND_PIXEL ||
		BinaryImage[y][x] == CHECKED_PIXEL)
	{
		ALG_LOG("(%d,%d) : 0, 이미 검사된 영역", x, y);
		return 0;
	}
	else
	{
		ALG_LOG("유효하지 않은 ImageType이 있습니다");
		return -100;
	}
}

void CountingCellsInBlob::Execute()
{
	int NumBlobs = 0;
	int NumCells = 0;
	for (int y = 0; y < IMAGE_VT_MAX; ++y)
	{
		for (int x = 0; x < IMAGE_HR_MAX; ++x)
		{
			if (BinaryImage[y][x] == IMAGE_PIXEL)
			{
				NumCells = FindBlobAndCell(x, y);
				NumBlobs++;
				ALG_LOG("%d번째 Blob의 Cell 개수 : %d", NumBlobs, NumCells);
			}
		}
	}

	ALG_LOG("Blob 개수 : %d", NumBlobs);
}
