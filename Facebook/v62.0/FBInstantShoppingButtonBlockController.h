/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryBlockController.h>
#import <Facebook/FBFocusableBlockController.h>

@class ASDisplayNode, FBMemInstantShoppingDocumentButtonElement, FBUserSession, FBRichStoryBlockDisplayContext, FBCanvasElementLogger, NSString;

@interface FBInstantShoppingButtonBlockController : NSObject <FBRichStoryBlockController, FBFocusableBlockController> {

	ASDisplayNode* _buttonNode;
	FBMemInstantShoppingDocumentButtonElement* _buttonModel;
	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBCanvasElementLogger* _loggingUtil;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)handleIntent:(id)arg1 ;
-(void)didTapButton:(id)arg1 ;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
@end
