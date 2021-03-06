/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBMapNodeDelegate.h>

@protocol FBAnnotationUnderlayNodeDelegate;
@class FBTextAnnotationController, FBAnnotationLayout, FBRichStoryBlockDisplayContext, FBRichStoryBlockControllerRegistry, FBRichStoryAnnotationBlock, FBMapNode, ASControlNode, NSString;

@interface FBAnnotationUnderlayNode : ASDisplayNode <FBMapNodeDelegate> {

	FBTextAnnotationController* _closeButtonController;
	FBAnnotationLayout* _layout;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBRichStoryBlockControllerRegistry* _controllerRegistry;
	FBRichStoryAnnotationBlock* _closeAnnotation;
	id<FBAnnotationUnderlayNodeDelegate> _delegate;
	FBMapNode* _mapNode;

}

@property (nonatomic,readonly) ASControlNode * closeButtonNode; 
@property (assign,nonatomic,__weak) id<FBAnnotationUnderlayNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMapNode * mapNode;                                             //@synthesize mapNode=_mapNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)containsUnderlayAnnotations:(id)arg1 ;
-(void)_staticInitialize;
-(id)_annotations;
-(void)didTapClose;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(FBMapNode *)mapNode;
-(ASControlNode *)closeButtonNode;
-(void)didTapMapNode:(id)arg1 ;
-(id)initWithAnnotationNodes:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(void)setDelegate:(id<FBAnnotationUnderlayNodeDelegate>)arg1 ;
-(id<FBAnnotationUnderlayNodeDelegate>)delegate;
-(void)layout;
@end

