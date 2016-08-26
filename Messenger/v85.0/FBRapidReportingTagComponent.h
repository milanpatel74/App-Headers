/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent, FBMemNegativeFeedbackTag;

@interface FBRapidReportingTagComponent : CKComponent {

	CKComponent* _labelComponent;
	BOOL _selected;
	FBMemNegativeFeedbackTag* _tag;
	SEL _action;

}

@property (nonatomic,readonly) SEL action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) FBMemNegativeFeedbackTag * tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
+(id)newWithTag:(id)arg1 selectionAction:(SEL)arg2 uiProvider:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(SEL)action;
-(FBMemNegativeFeedbackTag *)tag;
-(BOOL)selected;
@end
