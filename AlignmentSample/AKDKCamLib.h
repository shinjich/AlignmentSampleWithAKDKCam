extern int AKDKCamCreate( k4a_device_t pK, int iWidthMax, int iHeightMax );
extern int AKDKCamSetRGB( unsigned char* pRGB24, int iWidth, int iHeight );
extern int AKDKCamSetBGR( unsigned char* pBGR24, int iWidth, int iHeight );
extern void AKDKCamDestroy();
