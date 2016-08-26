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

@class FBMemNote, FBAnalyticsInfo, FBFeedToolbox, NSString;

@interface FBNoteAttachmentComponent : CKCompositeComponent <FBStoryAttachmentRenderingComponent> {

	FBMemNote* _note;
	FBAnalyticsInfo* _analyticsInfo;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemNote * note;                             //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                      //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAttachment:(id)arg1 options:(const FBStoryAttachmentRenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)supportedStyles;
-(FBFeedToolbox *)toolbox;
-(FBAnalyticsInfo *)analyticsInfo;
-(FBMemNote *)note;
@end
