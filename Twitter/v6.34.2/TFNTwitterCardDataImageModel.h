/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardContextModel.h>

@class TFNTwitterCardImageSpec, TFNTwitterCardData, NSString;

@interface TFNTwitterCardDataImageModel : NSObject <TFNTwitterCardContextModel> {

	TFNTwitterCardImageSpec* _primaryImageSpec;
	TFNTwitterCardData* _cardData;

}

@property (nonatomic,retain) TFNTwitterCardImageSpec * primaryImageSpec;              //@synthesize primaryImageSpec=_primaryImageSpec - In the implementation block
@property (nonatomic,retain) TFNTwitterCardData * cardData;                           //@synthesize cardData=_cardData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryImageSpecFromCardData:(id)arg1 ;
-(TFNTwitterCardData *)cardData;
-(id)initWithCardContext:(id)arg1 ;
-(id)imageSpecForKey:(id)arg1 ;
-(TFNTwitterCardImageSpec *)primaryImageSpec;
-(id)primaryImageFullSizeURL;
-(CGSize)primaryImageSize;
-(id)primaryImageThumbnailURL;
-(void)setCardData:(TFNTwitterCardData *)arg1 ;
-(BOOL)_hasPrimaryImage;
-(void)setPrimaryImageSpec:(TFNTwitterCardImageSpec *)arg1 ;
-(id)init;
@end
