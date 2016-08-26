/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraComponentModelManager.h>
#import <Facebook/FBCameraComponentModelManagerInternal.h>

@class CKComponentHostingView, FBCaptureManager, FBCaptureManagerFilterHandler, FBCameraComponentModelChangedListenerAnnouncer, FBProfileUnifiedCameraModel, FBCameraComponentModel;

@interface FBProfileUnifiedCameraComponentModelManager : NSObject <FBCameraComponentModelManager, FBCameraComponentModelManagerInternal> {

	CKComponentHostingView* _componentHostingView;
	FBCaptureManager* _captureManager;
	FBCaptureManagerFilterHandler* _filterHandler;
	FBCameraComponentModelChangedListenerAnnouncer* _modelChangedAnnouncer;
	FBProfileUnifiedCameraModel* _profileUnifiedCameraModel;

}

@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer;              //@synthesize modelChangedAnnouncer=_modelChangedAnnouncer - In the implementation block
@property (nonatomic,retain) FBProfileUnifiedCameraModel * profileUnifiedCameraModel;                             //@synthesize profileUnifiedCameraModel=_profileUnifiedCameraModel - In the implementation block
@property (nonatomic,retain) FBCaptureManager * captureManager;                                                   //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) FBCaptureManagerFilterHandler * filterHandler;                                       //@synthesize filterHandler=_filterHandler - In the implementation block
-(id)initWithProfileUnifiedCameraModel:(id)arg1 ;
-(void)setVideoKeyFrame:(id)arg1 ;
-(void)setStickerOverlay:(id)arg1 ;
-(void)setIsLoadingFrame:(BOOL)arg1 ;
-(void)setTeamSelectionExists:(BOOL)arg1 ;
-(void)setCurrentProfilePictureThumbnailUri:(id)arg1 ;
-(void)setBaseCameraModel:(FBCameraComponentModel *)arg1 ;
-(FBCameraComponentModel *)baseCameraModel;
-(FBCameraComponentModelChangedListenerAnnouncer *)modelChangedAnnouncer;
-(void)setModelChangedAnnouncer:(FBCameraComponentModelChangedListenerAnnouncer *)arg1 ;
-(FBCaptureManager *)captureManager;
-(void)setCaptureManager:(FBCaptureManager *)arg1 ;
-(FBCaptureManagerFilterHandler *)filterHandler;
-(void)setFilterHandler:(FBCaptureManagerFilterHandler *)arg1 ;
-(void)setComponentHostingView:(id)arg1 ;
-(void)setProfileUnifiedCameraModel:(FBProfileUnifiedCameraModel *)arg1 ;
-(FBProfileUnifiedCameraModel *)profileUnifiedCameraModel;
-(void)setTitle:(id)arg1 ;
@end
