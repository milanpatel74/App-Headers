/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBCommentStreamCommentStateListenerAnnouncer;

@interface FBCommentStreamAccessibleCommentWithTimestampHeaderComponent : CKCompositeComponent {

	FBCommentStreamCommentStateListenerAnnouncer* _commentStateListenerAnnouncer;

}

@property (nonatomic,__weak,readonly) FBCommentStreamCommentStateListenerAnnouncer * commentStateListenerAnnouncer;              //@synthesize commentStateListenerAnnouncer=_commentStateListenerAnnouncer - In the implementation block
+(id)newWithComment:(id)arg1 isReply:(BOOL)arg2 layoutDefinition:(id)arg3 replyButtonAction:(SEL)arg4 likeButtonAction:(SEL)arg5 moreButtonAction:(SEL)arg6 replyRowAction:(SEL)arg7 vpvLoggingWorkingRangeListener:(id)arg8 commentStateListenerAnnouncer:(id)arg9 toolbox:(id)arg10 ;
+(id)initialState;
-(void)didTapComment;
-(FBCommentStreamCommentStateListenerAnnouncer *)commentStateListenerAnnouncer;
@end
