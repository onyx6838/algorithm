int LaSoMayMan(int iNum)
{
    int     iChia = iNum;
    int     nDu;
 
    while(iChia > 0)
    {
        nDu = iChia % 10;
        if (nDu != 4 && nDu != 7)
            return 0;
        iChia /= 10;
    }
    return 1;
}
 
int TimSoKeTiep(int iSeek)
{
    int     iTiep = iSeek;
    while (!LaSoMayMan(iTiep))
        iTiep++;
    return iTiep;
}
 
// Noi go?i ha`m na`y truo´c tiên pha?i kiê?m tra (1 = left = right =109)
int TimTongTrongKhoang(int iLeft, int iRight)
{
    int     iTong = 0;
    while(iLeft<=iRight)
        iTong += TimSoKeTiep(iLeft++);
    return iTong;
}
