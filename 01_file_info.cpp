#include <stdio.h>
extern "C"
{
#include <libavformat/avformat.h>
}


int main()
{
    AVFormatContext *fmtctx = nullptr;
    const char* infile = "../1min.mp4";
    int ret;
    ret = avformat_open_input(&fmtctx, infile, nullptr, nullptr);
    if (ret < 0)
    {
        printf("avformat_open_input failed");
        return -1;
    }
    av_dump_format(fmtctx, 0, infile, 0);

    avformat_close_input(&fmtctx);
}