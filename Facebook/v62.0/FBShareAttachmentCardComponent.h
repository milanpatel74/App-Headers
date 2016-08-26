/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBBrowserPrefetchableComponent.h>
#import <Facebook/FBForceTouchIntentProvider.h>

@class FBUserSession, FBIntentTarget, FBFeedEventBus, FBMemFeedStory, FBAnalyticsInfo, FBFeedToolbox, FBMemStoryAttachment, NSString;

@interface FBShareAttachmentCardComponent : CKCompositeComponent <FBBrowserPrefetchableComponent, FBForceTouchIntentProvider> {

	FBFeedEventBus* _eventBus;
	FBMemFeedStory* _parentStory;
	FBAnalyticsInfo* _analyticsInfo;
	FBIntentTarget* _intentTarget;
	FBFeedToolbox* _toolbox;
	FBMemStoryAttachment* _attachment;
	BOOL _isSponsoredContext;
	NSString* _contentID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,readonly) FBIntentTarget * intentTarget; 
@property (nonatomic,readonly) BOOL isSponsoredContext; 
+(id)newWithAttachment:(id)arg1 tapAction:(SEL)arg2 options:(const FBStoryAttachmentRenderingComponentOptions*)arg3 toolbox:(id)arg4 ;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(void)didTapAttachmentCard:(id)arg1 ;
-(void)seePhotoAnyway:(id)arg1 ;
-(void)undoHide:(id)arg1 ;
-(FBIntentTarget *)intentTarget;
-(BOOL)isSponsoredContext;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(FBUserSession *)session;
@end
