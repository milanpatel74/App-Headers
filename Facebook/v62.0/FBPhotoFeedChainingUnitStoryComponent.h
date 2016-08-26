/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>
#import <Facebook/FBPhotoComponentOverlay.h>

@class FBGradientComponent, CKOverlayLayoutComponent, FBFeedToolbox, FBAnalyticsInfo, NSString, FBMemFeedStory, FBPhotoComponent;

@interface FBPhotoFeedChainingUnitStoryComponent : CKCompositeComponent <FBHScrollImpressionLogging, FBPhotoComponentOverlay> {

	SEL _tapAction;
	FBGradientComponent* _gradientComponent;
	CKOverlayLayoutComponent* _overlayComponent;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;
	NSString* _chainingUnitID;
	BOOL _hidden;
	FBMemFeedStory* _story;
	FBPhotoComponent* _imageComponent;

}

@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                         //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBPhotoComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStory:(id)arg1 tapAction:(SEL)arg2 toolbox:(id)arg3 chainingUnitID:(id)arg4 ;
+(id)initialState;
-(FBMemFeedStory *)story;
-(void)becameFullyVisible;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBPhotoComponent *)imageComponent;
-(void)didTapImage;
-(void)hideOverlay;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(void)showOverlay;
@end
