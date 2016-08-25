/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <eBay/eBay-Structs.h>
@class NSDate, BarcodeResult, UILabel, UnsupportedBarcodeView, UIView;

@interface BarcodeDisplayObject : NSObject {

	BOOL _attached;
	int _number;
	NSDate* _creation;
	NSDate* _lastUpdate;
	BarcodeResult* _entry;
	UILabel* _index;
	UnsupportedBarcodeView* _descriptionView;
	UIView* _barcodeView;
	CGRect _lastBarcodeLocation;

}

@property (nonatomic,retain) NSDate * creation;                                     //@synthesize creation=_creation - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                   //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) BarcodeResult * entry;                                 //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) UILabel * index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) UnsupportedBarcodeView * descriptionView;              //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) UIView * barcodeView;                                  //@synthesize barcodeView=_barcodeView - In the implementation block
@property (assign,nonatomic) BOOL attached;                                         //@synthesize attached=_attached - In the implementation block
@property (assign,nonatomic) int number;                                            //@synthesize number=_number - In the implementation block
@property (assign,nonatomic) CGRect lastBarcodeLocation;                            //@synthesize lastBarcodeLocation=_lastBarcodeLocation - In the implementation block
-(UnsupportedBarcodeView *)descriptionView;
-(void)setDescriptionView:(UnsupportedBarcodeView *)arg1 ;
-(void)setBarcodeView:(UIView *)arg1 ;
-(BOOL)attached;
-(void)setAttached:(BOOL)arg1 ;
-(CGRect)lastBarcodeLocation;
-(void)setLastBarcodeLocation:(CGRect)arg1 ;
-(UILabel *)index;
-(void)setIndex:(UILabel *)arg1 ;
-(BarcodeResult *)entry;
-(void)setEntry:(BarcodeResult *)arg1 ;
-(UIView *)barcodeView;
-(void)setCreation:(NSDate *)arg1 ;
-(NSDate *)creation;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(NSDate *)lastUpdate;
@end
