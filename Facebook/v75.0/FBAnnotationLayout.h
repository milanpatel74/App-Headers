/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryMutableLayout.h>
#import <Facebook/FBRichStoryElementDisplayAttributeCalculator.h>

@class NSDictionary, FBRichStoryBlockControllerRegistry, FBRichStoryLayout, FBRichStoryBlockDisplayContext, NSArray, NSString;

@interface FBAnnotationLayout : FBRichStoryMutableLayout <FBRichStoryElementDisplayAttributeCalculator> {

	NSDictionary* _annotationsByID;
	FBRichStoryBlockControllerRegistry* _registry;
	FBRichStoryLayout* _blockLayout;
	FBRichStoryLayout* _overlayLayout;
	FBRichStoryBlockDisplayContext* _displayContext;
	NSArray* _annotations;
	NSDictionary* _elementStacks;
	NSDictionary* _annotationsByPosition;

}

@property (nonatomic,retain) FBRichStoryLayout * blockLayout;                                     //@synthesize blockLayout=_blockLayout - In the implementation block
@property (nonatomic,retain) FBRichStoryLayout * overlayLayout;                                   //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) FBRichStoryBlockControllerRegistry * registry;                       //@synthesize registry=_registry - In the implementation block
@property (assign,nonatomic,__weak) FBRichStoryBlockDisplayContext * displayContext;              //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,copy) NSArray * annotations;                                                 //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,copy) NSDictionary * elementStacks;                                          //@synthesize elementStacks=_elementStacks - In the implementation block
@property (nonatomic,copy) NSDictionary * annotationsByPosition;                                  //@synthesize annotationsByPosition=_annotationsByPosition - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotationsByID;                               //@synthesize annotationsByID=_annotationsByID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_filterAnnotations:(id)arg1 byEligiblePositions:(id)arg2 ;
+(id)_metricsWithDisplayContext:(id)arg1 blockSize:(CGSize)arg2 ;
+(id)_layoutDescriptionForAnnotationsByPosition:(id)arg1 stacks:(inout id*)arg2 metrics:(id)arg3 presentationAttributes:(id)arg4 displayContext:(id)arg5 overlayLayout:(id)arg6 blockSize:(CGSize)arg7 ;
+(id)_elementsFromAnnotations:(id)arg1 ;
+(id)_annotationsByPositionFromAnnotations:(id)arg1 ;
+(id)_annotationsByIDFromAnnotations:(id)arg1 ;
+(unsigned long long)_layoutDirectionForVerticalPosition:(long long)arg1 ;
+(id)_verticalPositionForAnnotation:(id)arg1 inStacks:(id)arg2 interfaceGuide:(id)arg3 styleSheet:(id)arg4 ;
+(id)_boundingAnchorForVerticalPosition:(long long)arg1 ;
+(FBTextMetrics*)_textMetricsForAnnotation:(id)arg1 interfaceGuide:(id)arg2 styleSheet:(id)arg3 ;
+(long long)_horizontalAnnotationPositionForTextAlignment:(long long)arg1 ;
+(void)_addAnnotation:(id)arg1 toStacks:(id)arg2 ;
+(id)_anchorForLayoutDirection:(unsigned long long)arg1 verticalPosition:(long long)arg2 textSize:(unsigned long long)arg3 inStacks:(id)arg4 ;
+(id)_leadingElementAnchorForVerticalPosition:(long long)arg1 textSize:(unsigned long long)arg2 inStacks:(id)arg3 ;
+(id)_paddingOperatorForLayoutDirection:(unsigned long long)arg1 ;
+(double)_paddingForAnnotationBlock:(id)arg1 inPosition:(long long)arg2 inStacks:(id)arg3 verticalDirection:(unsigned long long)arg4 interfaceGuide:(id)arg5 styleSheet:(id)arg6 ;
+(long long)_positionClosestToPosition:(long long)arg1 ofEligiblePositions:(id)arg2 ;
+(long long)_verticalPositionForShadowElementID:(id)arg1 ;
+(id)_leadingElementInPosition:(long long)arg1 inStacks:(id)arg2 ;
+(BOOL)_elementParticipatesInLayout:(id)arg1 ;
+(id)_leadingAnchorForLayoutDirection:(unsigned long long)arg1 ;
+(id)adjacentAnnotationsFromAnnotations:(id)arg1 eligibleVerticalPositions:(id)arg2 ;
-(id)calculator;
-(id)layoutAttributesForElementWithID:(id)arg1 ;
-(void)setBlockLayout:(FBRichStoryLayout *)arg1 ;
-(void)setOverlayLayout:(FBRichStoryLayout *)arg1 ;
-(void)setRegistry:(FBRichStoryBlockControllerRegistry *)arg1 ;
-(void)setElementStacks:(NSDictionary *)arg1 ;
-(FBRichStoryLayout *)blockLayout;
-(FBRichStoryLayout *)overlayLayout;
-(id)_controllerLayoutForElement:(id)arg1 constrainingSize:(CGSize)arg2 ;
-(id)_annotationsForShadowsInPosition:(long long)arg1 appliedVerticalPosition:(long long*)arg2 ;
-(NSDictionary *)elementStacks;
-(id)layoutForElement:(id)arg1 descriptor:(id)arg2 presentationAttributes:(id)arg3 constrainingSize:(CGSize)arg4 ;
-(id)initWithAnnotations:(id)arg1 controllerRegistry:(id)arg2 eligibleVerticalPositions:(id)arg3 blockLayout:(id)arg4 overlayLayout:(id)arg5 boundingSize:(CGSize)arg6 presentationAttributes:(id)arg7 displayContext:(id)arg8 ;
-(NSDictionary *)annotationsByID;
-(NSDictionary *)annotationsByPosition;
-(void)setAnnotationsByPosition:(NSDictionary *)arg1 ;
-(void)setAnnotations:(NSArray *)arg1 ;
-(NSArray *)annotations;
-(void)setDisplayContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(FBRichStoryBlockControllerRegistry *)registry;
@end

