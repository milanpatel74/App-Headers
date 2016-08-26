/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProfilePicturePack, FBProfileVideoPack, FBProfileFramesPack, NSString, NSDate, FBScenePath, FBProfileStagingGroundTraits, FBProfileMediaDeeplinkAttachment;

@interface FBProfileMediaDataPackBuilder : NSObject {

	FBProfilePicturePack* _profilePicturePack;
	FBProfileVideoPack* _profileVideoPack;
	FBProfileFramesPack* _profileFramesPack;
	NSString* _composerSessionId;
	NSDate* _defaultExpirationTime;
	BOOL _mediaTypeIsVideo;
	FBScenePath* _scenePath;
	FBProfileStagingGroundTraits* _stagingGroundTraits;
	NSString* _photoSource;
	FBProfileMediaDeeplinkAttachment* _deeplinkAttachment;
	BOOL _remotePhotoPickerShouldDefaultToExtraViewControllers;
	BOOL _underlayFromQPEnabled;
	NSString* _caption;

}
+(id)profileMediaDataPackFromExistingProfileMediaDataPack:(id)arg1 ;
+(id)profileMediaDataPack;
-(id)withProfilePicturePack:(id)arg1 ;
-(id)withProfileFramesPack:(id)arg1 ;
-(id)withMediaTypeIsVideo:(BOOL)arg1 ;
-(id)withCaption:(id)arg1 ;
-(id)withStagingGroundTraits:(id)arg1 ;
-(id)withRemotePhotoPickerShouldDefaultToExtraViewControllers:(BOOL)arg1 ;
-(id)withProfileVideoPack:(id)arg1 ;
-(id)withPhotoSource:(id)arg1 ;
-(id)withComposerSessionId:(id)arg1 ;
-(id)withDefaultExpirationTime:(id)arg1 ;
-(id)withScenePath:(id)arg1 ;
-(id)withDeeplinkAttachment:(id)arg1 ;
-(id)withUnderlayFromQPEnabled:(BOOL)arg1 ;
-(id)build;
@end
