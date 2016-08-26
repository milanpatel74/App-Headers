/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBStoryAttachmentRenderingComponent.h>

@class FBFeedEventBus, FBFeedToolbox, NSArray, FBNativeArticleAttachmentModel, NSString;

@interface FBNativeArticleAttachmentComponent : CKCompositeComponent <FBStoryAttachmentRenderingComponent> {

	BOOL _lightningBoltEnabled;
	FBFeedEventBus* _eventBus;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	FBNativeArticleAttachmentModel* _model;

}

@property (nonatomic,readonly) FBFeedEventBus * eventBus;                           //@synthesize eventBus=_eventBus - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                             //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                        //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) BOOL lightningBoltEnabled;                           //@synthesize lightningBoltEnabled=_lightningBoltEnabled - In the implementation block
@property (nonatomic,readonly) FBNativeArticleAttachmentModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAttachment:(id)arg1 options:(const FBStoryAttachmentRenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)supportedStyles;
-(FBFeedToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(FBFeedEventBus *)eventBus;
-(BOOL)lightningBoltEnabled;
-(FBNativeArticleAttachmentModel *)model;
@end
