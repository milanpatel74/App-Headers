/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMLESuggestion, FBComposerLifeEventAttachments, FBComposerEventDate;

@interface FBComposerViewLifeEventItem : FBValueObject <NSCopying> {

	BOOL _editable;
	FBMLESuggestion* _suggestion;
	FBComposerLifeEventAttachments* _attachments;
	FBComposerEventDate* _startDate;

}

@property (nonatomic,copy,readonly) FBMLESuggestion * suggestion;                              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) BOOL editable;                                                  //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy,readonly) FBComposerLifeEventAttachments * attachments;              //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEventDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
-(FBMLESuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 editable:(BOOL)arg2 attachments:(id)arg3 startDate:(id)arg4 ;
-(BOOL)editable;
-(FBComposerLifeEventAttachments *)attachments;
-(FBComposerEventDate *)startDate;
@end
