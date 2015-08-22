/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBCaptureManagerDelegate <NSObject>
@required
-(void)captureManagerPreviewDidLoad:(id)arg1;
-(void)captureManagerSessionDidStart:(id)arg1;
-(void)captureManager:(id)arg1 didChangeCapturePositionTo:(long long)arg2;
-(CGSize*)captureManagerVideoInputSize:(id)arg1;
-(id)addFilterToPhoto:(id)arg1;
-(void)captureManager:(id)arg1 didCaptureImage:(id)arg2 metadata:(id)arg3 cameraPosition:(long long)arg4;
-(void)captureManagerDidStartCaptureVideo:(id)arg1;
-(void)captureManager:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 cameraPosition:(long long)arg4;
-(void)captureManagerDidFailToCaptureVideo:(id)arg1;

@end
