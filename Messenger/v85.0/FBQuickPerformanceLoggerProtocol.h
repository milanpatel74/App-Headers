/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQuickPerformanceLoggerProtocol <NSObject>
@required
-(void)markerNote:(int)arg1 actionId:(short)arg2 tag:(id)arg3;
-(void)markerStart:(int)arg1;
-(void)annotateMarker:(int)arg1 withValues:(/*^block*/id)arg2;
-(void)markerEnd:(int)arg1 actionId:(short)arg2;
-(void)markerCancel:(int)arg1;
-(void)markerAnnotate:(int)arg1 annotationKey:(id)arg2 annotationValue:(id)arg3;
-(void)markerTag:(int)arg1 tag:(id)arg2;
-(void)setMarkerParent:(int)arg1 parentMarkerID:(int)arg2;
-(BOOL)isMarkerOn:(int)arg1;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 monoTimestamp:(double)arg3;
-(void)markerEnd:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 monoTimestamp:(double)arg4;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2;
-(void)markerAnnotate:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4;
-(void)markerEnd:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3;
-(void)markerAnnotate:(int)arg1 annotationKey:(id)arg2 annotationValueBlock:(/*^block*/id)arg3;
-(void)markerCancel:(int)arg1 instanceKey:(int)arg2;
-(void)markerTag:(int)arg1 instanceKey:(int)arg2 tag:(id)arg3;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 monoTimestamp:(double)arg4;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3;
-(void)markerAnnotate:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValueBlock:(/*^block*/id)arg4;
-(BOOL)isMarkerOnAndSampled:(int)arg1 instanceKey:(int)arg2;
-(void)annotateMarker:(int)arg1 instanceKey:(int)arg2 withValues:(/*^block*/id)arg3;
-(BOOL)isMarkerOnAndSampled:(int)arg1;
-(void)markerStart:(int)arg1 monoTimestamp:(double)arg2;
-(void)markerStart:(int)arg1 annotationKey:(id)arg2 annotationValue:(id)arg3;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4 monoTimestamp:(double)arg5;
-(void)markersStart:(id)arg1;
-(void)clearAllMarkers;
-(double)getMarkerStartTime:(int)arg1;
-(double)getMarkerStartTime:(int)arg1 instanceKey:(int)arg2;
-(void)markerTag:(int)arg1 tags:(id)arg2;
-(void)moduleTag:(short)arg1 tag:(id)arg2;
-(void)setAlwaysOnSampleRate:(int)arg1 sampleRate:(int)arg2;
-(void)clearAlwaysOnSampleRate:(int)arg1;
-(void)markerNote:(int)arg1 actionId:(short)arg2;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 tag:(id)arg4;
-(void)markerNote:(int)arg1 actionId:(short)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 annotationKey:(id)arg4 annotationValue:(id)arg5;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 annotationKey:(id)arg4 annotationValue:(id)arg5 monoTimestamp:(double)arg6;
-(void)markerNoteForMarkers:(id)arg1 actionId:(short)arg2 tag:(id)arg3;
-(void)markersEndWithActionId:(short)arg1 markers:(id)arg2;
-(BOOL)isMarkerOn:(int)arg1 instanceKey:(int)arg2;

@end
