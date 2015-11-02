/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WABaseReceiptTableViewCell.h>

@class NSDictionary, NSDate, WAProfilePictureThumbnailView, UILabel, NSString, UIFont;

@interface WAGroupReceiptTableViewCell : WABaseReceiptTableViewCell {

	NSDictionary* _receiptsInfo;
	int _receiptLevel;
	NSDate* _sentDate;
	BOOL _expanded;
	BOOL _nameIsTruncated;
	BOOL _timeLabelHidden;
	BOOL _dateLabelHidden;
	BOOL _isMediaMessage;
	WAProfilePictureThumbnailView* _imageViewContact;
	UILabel* _receiptTypeLabel[3];
	UILabel* _receiptDateLabel[3];
	UILabel* _receiptTimeLabel[3];
	UILabel* _nameLabel;
	UILabel* _pushNameLabel;
	NSString* _contactJID;
	double _mainSectionHeight;
	UIFont* _contactNameFont;
	UIFont* _pushNameFont;

}

@property (nonatomic,readonly) UILabel * nameLabel;                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * pushNameLabel;              //@synthesize pushNameLabel=_pushNameLabel - In the implementation block
@property (nonatomic,copy) NSString * contactJID;                    //@synthesize contactJID=_contactJID - In the implementation block
@property (assign,nonatomic) double mainSectionHeight;               //@synthesize mainSectionHeight=_mainSectionHeight - In the implementation block
@property (nonatomic,retain) UIFont * contactNameFont;               //@synthesize contactNameFont=_contactNameFont - In the implementation block
@property (nonatomic,retain) UIFont * pushNameFont;                  //@synthesize pushNameFont=_pushNameFont - In the implementation block
-(NSString *)contactJID;
-(void)setContactJID:(NSString *)arg1 ;
-(UIFont *)contactNameFont;
-(UILabel *)pushNameLabel;
-(id)receiptTimeStringForDate:(id)arg1 ;
-(id)receiptDateStringForDate:(id)arg1 ;
-(id)receiptDateForLevel:(int)arg1 ;
-(id)receiptDetailTimeStringForDate:(id)arg1 ;
-(void)updatePresentationAnimated:(BOOL)arg1 ;
-(void)setReceiptInfo:(id)arg1 receiptLevel:(int)arg2 sentDate:(id)arg3 isMediaMessage:(BOOL)arg4 expanded:(BOOL)arg5 ;
-(double)mainSectionHeight;
-(void)setMainSectionHeight:(double)arg1 ;
-(void)setContactNameFont:(UIFont *)arg1 ;
-(UIFont *)pushNameFont;
-(void)setPushNameFont:(UIFont *)arg1 ;
-(UILabel *)nameLabel;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
@end

