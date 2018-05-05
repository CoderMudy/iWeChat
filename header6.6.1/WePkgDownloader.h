//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSURLSessionDownloadTask, WePkgFileDownloadInfo;
@protocol WePkgDownloaderDelegate;

@interface WePkgDownloader : MMObject
{
    WePkgFileDownloadInfo *_downloadInfo;
    id <WePkgDownloaderDelegate> _delegate;
    NSURLSessionDownloadTask *_downloadTask;
}

@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) __weak id <WePkgDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WePkgFileDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
- (void).cxx_destruct;
- (void)cancelDownload;
- (void)startDownload;
- (id)getFilePathIfAlreadyDownloaded;
- (id)initWithPkgDownloadInfo:(id)arg1 delegate:(id)arg2;

@end
