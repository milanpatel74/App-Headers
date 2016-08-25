/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol UnityAdsCampaignManagerDelegate;
@class NSMutableData, NSArray, NSDictionary, UnityAdsCampaign, NSURLConnection, NSString;

@interface UnityAdsCampaignManager : NSObject <NSURLConnectionDelegate> {

	NSMutableData* _campaignDownloadData;
	id<UnityAdsCampaignManagerDelegate> _delegate;
	NSArray* _campaigns;
	NSDictionary* _campaignData;
	UnityAdsCampaign* _selectedCampaign;
	NSURLConnection* _urlConnection;

}

@property (assign,nonatomic,__weak) id<UnityAdsCampaignManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * campaigns;                                              //@synthesize campaigns=_campaigns - In the implementation block
@property (nonatomic,retain) NSDictionary * campaignData;                                      //@synthesize campaignData=_campaignData - In the implementation block
@property (nonatomic,retain) UnityAdsCampaign * selectedCampaign;                              //@synthesize selectedCampaign=_selectedCampaign - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                                  //@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,retain) NSMutableData * campaignDownloadData;                             //@synthesize campaignDownloadData=_campaignDownloadData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_processCampaignDownloadData;
-(NSMutableData *)campaignDownloadData;
-(id)deserializeCampaigns:(id)arg1 ;
-(void)setCampaigns:(NSArray *)arg1 ;
-(NSArray *)campaigns;
-(id)getCampaignWithVideoFile:(id)arg1 ;
-(void)setCampaignDownloadData:(NSMutableData *)arg1 ;
-(void)_campaignDataReceived;
-(void)updateCampaigns;
-(id)getVideoURLForCampaign:(id)arg1 ;
-(void)cacheNextCampaignAfter:(id)arg1 ;
-(id)getCampaignWithId:(id)arg1 ;
-(id)getCampaignWithITunesId:(id)arg1 ;
-(id)getCampaignWithClickUrl:(id)arg1 ;
-(id)getViewableCampaigns;
-(void)cache:(id)arg1 finishedCachingCampaign:(id)arg2 ;
-(NSDictionary *)campaignData;
-(void)setCampaignData:(NSDictionary *)arg1 ;
-(UnityAdsCampaign *)selectedCampaign;
-(void)setSelectedCampaign:(UnityAdsCampaign *)arg1 ;
-(void)setDelegate:(id<UnityAdsCampaignManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<UnityAdsCampaignManagerDelegate>)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(void)cancelAllDownloads;
@end
