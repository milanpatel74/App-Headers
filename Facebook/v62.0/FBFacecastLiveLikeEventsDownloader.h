/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFacecastLiveEventsDownloader.h>

@class NSString, FBUserSession, NSDate;

@interface FBFacecastLiveLikeEventsDownloader : NSObject <FBFacecastLiveEventsDownloader> {

	NSString* _videoID;
	FBUserSession* _session;
	NSDate* _windowStartDate;

}

@property (nonatomic,copy) NSString * videoID;                                        //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSDate * windowStartDate;                                //@synthesize windowStartDate=_windowStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long stableBufferThreshold; 
@property (nonatomic,readonly) double minimumPeriod; 
-(id)graphQLQuery;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 ;
-(double)minimumPeriod;
-(unsigned long long)stableBufferThreshold;
-(id)eventsFromResponse:(id)arg1 finalStatus:(id)arg2 ;
-(NSDate *)windowStartDate;
-(void)setWindowStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)type;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
