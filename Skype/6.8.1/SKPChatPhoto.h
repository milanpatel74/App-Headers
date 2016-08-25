//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKPhotoProtocol.h"

@class NSString, NSURL, UIImage;

@interface SKPChatPhoto : NSObject <MKPhotoProtocol>
{
    id <SDWebImageOperation> _webImageOperation;
    _Bool _keepImplicitDecoding;
    _Bool _loadingInProgress;
    UIImage *_underlyingImage;
    NSString *_caption;
    UIImage *_image;
    NSURL *_photoURL;
}

@property(nonatomic) _Bool loadingInProgress; // @synthesize loadingInProgress=_loadingInProgress;
@property(nonatomic) _Bool keepImplicitDecoding; // @synthesize keepImplicitDecoding=_keepImplicitDecoding;
@property(retain, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (void)cancelAnyLoading;
- (void)postCompleteNotification;
- (void)imageLoadingComplete;
- (void)decompressImageAndFinishLoading;
- (void)unloadUnderlyingImage;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
