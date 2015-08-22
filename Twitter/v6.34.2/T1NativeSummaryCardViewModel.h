/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1NativeCardClassicCardViewModel.h>

@class NSString, UIImage, TFNTwitterCardContext, TFNTwitterUser, TCResourceLoader;

@interface T1NativeSummaryCardViewModel : NSObject <T1NativeCardClassicCardViewModel> {

	BOOL _hasPrimaryUser;
	BOOL _hasThumbnailImage;
	NSString* _callToActionEventType;
	NSString* _callToActionText;
	NSString* _titleText;
	NSString* _descriptionText;
	UIImage* _thumbnailImage;
	TFNTwitterCardContext* _cardContext;
	TFNTwitterUser* _user;
	long long _userID;
	NSString* _thumbnailImageURL;
	TCResourceLoader* _resourceLoader;
	CGSize _thumbnailImageSize;

}

@property (nonatomic,copy) NSString * titleText;                               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                         //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                         //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) CGSize thumbnailImageSize;                        //@synthesize thumbnailImageSize=_thumbnailImageSize - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailImage;                         //@synthesize hasThumbnailImage=_hasThumbnailImage - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) TFNTwitterCardContext * cardContext;              //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * user;                            //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) long long userID;                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                       //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,retain) TCResourceLoader * resourceLoader;                //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * userFullName; 
@property (nonatomic,readonly) UIImage * userAvatarImage; 
@property (nonatomic,readonly) BOOL hasPrimaryUser;                            //@synthesize hasPrimaryUser=_hasPrimaryUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionText;               //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,readonly) NSString * callToActionEventType;               //@synthesize callToActionEventType=_callToActionEventType - In the implementation block
-(id)initWithCardContext:(id)arg1 ;
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(CGSize)thumbnailImageSize;
-(void)_userDidUpdate:(id)arg1 ;
-(NSString *)callToActionText;
-(NSString *)callToActionEventType;
-(UIImage *)userAvatarImage;
-(BOOL)hasPrimaryUser;
-(void)setThumbnailImageSize:(CGSize)arg1 ;
-(BOOL)hasThumbnailImage;
-(void)setUserID:(long long)arg1 ;
-(NSString *)userFullName;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setTitleText:(NSString *)arg1 ;
-(UIImage *)thumbnailImage;
-(BOOL)hasTitle;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(long long)userID;
-(void)setResourceLoader:(TCResourceLoader *)arg1 ;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSString *)thumbnailImageURL;
-(TCResourceLoader *)resourceLoader;
@end
