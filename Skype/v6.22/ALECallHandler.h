/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/ALEObjectInterface.h>

@interface ALECallHandler : ALEObjectInterface {

	BOOL ownCallHandlerObj;
	CallHandlerWrapper* callhandlerWrapper;

}
-(id)initWithoutSkylibObject;
-(void)createSkylibObject;
-(void*)skylibObj;
-(unsigned)AddParticipant:(unsigned)arg1 andParticipant:(id)arg2 andThreadid:(id)arg3 andMessageid:(id)arg4 ;
-(BOOL)AnswerCall:(unsigned)arg1 andIsvideoenabled:(BOOL)arg2 ;
-(BOOL)CallAttachSendVideo:(unsigned)arg1 andVideoobjectid:(unsigned)arg2 ;
-(void)CallGetParticipantVideos:(unsigned)arg1 andParticipantvideos:(id*)arg2 ;
-(void)CallGetParticipants:(unsigned)arg1 andCallparticipantobjectids:(id*)arg2 ;
-(void)CallGetSendVideos:(unsigned)arg1 andSendvideoobjectids:(id*)arg2 ;
-(BOOL)CallHold:(unsigned)arg1 andHold:(BOOL)arg2 ;
-(BOOL)CallMute:(unsigned)arg1 andMute:(BOOL)arg2 ;
-(unsigned)CallParticipantGetCallObject:(unsigned)arg1 ;
-(void)GetActiveCalls:(id*)arg1 ;
-(id)GetDebugInformation:(id)arg1 ;
-(unsigned)GetIntegerProperty:(unsigned)arg1 andPropkey:(int)arg2 ;
-(id)GetStringProperty:(unsigned)arg1 andPropkey:(int)arg2 ;
-(unsigned)JoinCall:(id)arg1 andIsvideoenabled:(BOOL)arg2 ;
-(void)LeaveCall:(unsigned)arg1 ;
-(unsigned)PlaceCall:(id)arg1 andParticipantlist:(id)arg2 andIsvideoenabled:(BOOL)arg3 andIsgolive:(BOOL)arg4 andAllowhostless:(BOOL)arg5 andThreadid:(id)arg6 andMessageid:(id)arg7 andSubject:(id)arg8 andConversationtype:(id)arg9 ;
-(BOOL)RemoveParticipant:(unsigned)arg1 ;
-(unsigned)Subscribe:(id)arg1 ;
-(void)Unsubscribe:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end
