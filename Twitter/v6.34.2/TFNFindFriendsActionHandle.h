/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSDate, NSArray;


@protocol TFNFindFriendsActionHandle <NSObject>
@property (assign,nonatomic,__weak) id<TFNFindFriendsActionDelegate> delegate; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSArray * twitterUsersSoFar; 
@property (nonatomic,readonly) double friendsProgress; 
@property (nonatomic,readonly) BOOL doneLoadingFriends; 
@property (nonatomic,readonly) unsigned long long forwardLookupResultsCount; 
@property (nonatomic,readonly) unsigned long long reverseLookupResultsCount; 
@property (nonatomic,readonly) BOOL isAddressBookUploadFinished; 
@optional
-(unsigned long long)forwardLookupResultsCount;
-(unsigned long long)reverseLookupResultsCount;
-(BOOL)isAddressBookUploadFinished;

@required
-(double)friendsProgress;
-(NSArray *)twitterUsersSoFar;
-(BOOL)doneLoadingFriends;
-(void)retryFailedOperations;
-(void)setDelegate:(id)arg1;
-(id<TFNFindFriendsActionDelegate>)delegate;
-(NSDate *)startDate;

@end
