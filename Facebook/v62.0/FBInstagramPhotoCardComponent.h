/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class NSString, FBFeedToolbox, FBMemPhoto, FBPhotoComponent, NSArray;

@interface FBInstagramPhotoCardComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	NSString* _unitCacheId;
	FBFeedToolbox* _toolbox;
	FBMemPhoto* _photo;
	FBPhotoComponent* _photoComponent;
	NSArray* _trackingCodes;

}

@property (nonatomic,retain) FBFeedToolbox * toolbox;                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) FBMemPhoto * photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) FBPhotoComponent * photoComponent;              //@synthesize photoComponent=_photoComponent - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                          //@synthesize trackingCodes=_trackingCodes - In the implementation block
+(id)newWithPhoto:(id)arg1 unitCacheId:(id)arg2 item:(id)arg3 toolbox:(id)arg4 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(NSArray *)trackingCodes;
-(FBPhotoComponent *)photoComponent;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)setPhotoComponent:(FBPhotoComponent *)arg1 ;
-(void)handleLikeTap;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(void)logEvent:(id)arg1 ;
-(FBMemPhoto *)photo;
@end
