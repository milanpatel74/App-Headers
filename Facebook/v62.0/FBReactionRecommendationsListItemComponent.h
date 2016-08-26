/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol, FBQueriedReactionStoryAttachmentFieldsProtocol;
@class FBReactionContext, FBMemContactRecommendationField, FBMemModelObject;

@interface FBReactionRecommendationsListItemComponent : CKCompositeComponent {

	FBReactionContext* _context;
	FBMemContactRecommendationField* _rating;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBMemModelObject*<FBQueriedReactionStoryAttachmentFieldsProtocol> _attachment;

}
+(id)newWithAttachment:(id)arg1 unit:(id)arg2 reactionContext:(id)arg3 shouldHideBottomBorder:(BOOL)arg4 ;
-(void)reviewTapped;
@end
