/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1NewsStoryViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1NewsContainerContainee.h>
#import <Twitter/TFNCompositionProtocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterNewsEvent, NSError, UIView;

@interface T1NewsDetailsViewController : TFNItemsDataViewController <T1NewsStoryViewDelegate, TFNTwitterAuthenticated, T1NewsContainerContainee, TFNCompositionProtocol> {

	NSString* _country;
	NSString* _language;
	TFNTwitterAccount* _account;
	TFNTwitterNewsEvent* _newsEvent;
	NSError* _detailsAPIError;
	UIView* _infoView;

}

@property (nonatomic,retain) TFNTwitterNewsEvent * newsEvent;              //@synthesize newsEvent=_newsEvent - In the implementation block
@property (nonatomic,retain) NSError * detailsAPIError;                    //@synthesize detailsAPIError=_detailsAPIError - In the implementation block
@property (nonatomic,retain) UIView * infoView;                            //@synthesize infoView=_infoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                  //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(void)setNewsEvent:(TFNTwitterNewsEvent *)arg1 ;
-(id)initWithNewsEvent:(id)arg1 account:(id)arg2 country:(id)arg3 language:(id)arg4 ;
-(id)scribeSection;
-(TFNTwitterNewsEvent *)newsEvent;
-(id)infoViewForContainer:(id)arg1 ;
-(id)bannerImageURLForContainer:(id)arg1 ;
-(void)bannerImageTappedInContainer:(id)arg1 ;
-(void)_getNewsDetails;
-(id)_sectionHeaderForString:(id)arg1 ;
-(id)_seeRelatedTweetsItem;
-(void)setDetailsAPIError:(NSError *)arg1 ;
-(void)_openRelatedTweets:(id)arg1 ;
-(void)_openWebviewForNewsEvent:(id)arg1 ;
-(void)newsStoryViewImageTapped:(id)arg1 ;
-(void)newsStoryViewTitleTapped:(id)arg1 ;
-(void)newsStoryViewCTATapped:(id)arg1 ;
-(NSError *)detailsAPIError;
-(id)composition;
-(UIView *)infoView;
-(void)setInfoView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)update;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
