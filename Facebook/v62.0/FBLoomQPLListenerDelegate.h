/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomQPLListenerDelegate
@required
-(BOOL)QPLTraceDidStartWithMarkerID:(int)arg1 uniqueID:(int)arg2 timestamp:(long long)arg3;
-(void)QPLTraceWillCancelWithMarkerID:(int)arg1 uniqueID:(int)arg2;
-(void)QPLTraceDidAnnotateWithMarkerID:(int)arg1 annotationKey:(const char*)arg2 annotationValue:(const char*)arg3 uniqueID:(int)arg4;
-(void)QPLTraceDidTagWithMarkerID:(int)arg1 tag:(const char*)arg2 uniqueID:(int)arg3;
-(void)QPLTraceDidNoteWithMarkerID:(int)arg1 actionID:(short)arg2 noteTag:(const char*)arg3 timestamp:(long long)arg4 uniqueID:(int)arg5;
-(void)QPLTraceWillEndWithMarkerID:(int)arg1 actionID:(short)arg2 timestamp:(long long)arg3 uniqueID:(int)arg4;

@end

