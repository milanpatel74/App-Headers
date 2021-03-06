/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMVideoPlaybackEventListener <NSObject>
@required
-(void)player:(id)arg1 startedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 stallTime:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8;
-(void)player:(id)arg1 pausedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7;
-(void)player:(id)arg1 finishedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7;
-(void)player:(id)arg1 failedPlayingVideoForMessage:(id)arg2 error:(id)arg3 origin:(id)arg4 videoID:(id)arg5;
-(void)player:(id)arg1 requestedPlayingVideoForMessage:(id)arg2 origin:(id)arg3 videoID:(id)arg4;
-(void)player:(id)arg1 stalledVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8;
-(void)player:(id)arg1 unstalledVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 stallTime:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8;
-(void)player:(id)arg1 interruptedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;
-(void)player:(id)arg1 dismissedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;

@end

