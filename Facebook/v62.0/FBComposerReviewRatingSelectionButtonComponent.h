/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBComposerPublishTarget, NSString, CKComponent;

@interface FBComposerReviewRatingSelectionButtonComponent : CKCompositeComponent {

	FBComposerPublishTarget* _publishTarget;
	NSString* _compositionID;
	long long _rating;
	SEL _ratingDidChangeAction;
	CKComponent* _starRatingLabelComponent;

}
+(id)newWithPublishTarget:(id)arg1 compositionID:(id)arg2 rating:(long long)arg3 action:(SEL)arg4 ;
-(CGPoint)getStarRatingLabelOriginInWindow;
@end
