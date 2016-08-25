/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EBUMyEBayTabContentCellModel : NSObject {

	BOOL _disablePersistentSelection;
	NSString* _modelIdentifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _subtitleColorStyle;
	long long _navDestination;
	/*^block*/id _didSelectionBlock;
	NSString* _accessibilityIdentifier;
	NSString* _titleAccessibilityIdentifier;
	NSString* _subTitleAccessibilityIdentifier;

}

@property (nonatomic,retain) NSString * modelIdentifier;                            //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * subtitleColorStyle;                         //@synthesize subtitleColorStyle=_subtitleColorStyle - In the implementation block
@property (assign,nonatomic) long long navDestination;                              //@synthesize navDestination=_navDestination - In the implementation block
@property (assign,nonatomic) BOOL disablePersistentSelection;                       //@synthesize disablePersistentSelection=_disablePersistentSelection - In the implementation block
@property (nonatomic,copy) id didSelectionBlock;                                    //@synthesize didSelectionBlock=_didSelectionBlock - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                      //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * titleAccessibilityIdentifier;                 //@synthesize titleAccessibilityIdentifier=_titleAccessibilityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * subTitleAccessibilityIdentifier;              //@synthesize subTitleAccessibilityIdentifier=_subTitleAccessibilityIdentifier - In the implementation block
-(long long)navDestination;
-(void)setTitleAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setNavDestination:(long long)arg1 ;
-(void)setDidSelectionBlock:(id)arg1 ;
-(void)setSubTitleAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setDisablePersistentSelection:(BOOL)arg1 ;
-(void)setSubtitleColorStyle:(NSString *)arg1 ;
-(NSString *)titleAccessibilityIdentifier;
-(NSString *)subTitleAccessibilityIdentifier;
-(NSString *)subtitleColorStyle;
-(id)didSelectionBlock;
-(BOOL)disablePersistentSelection;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)accessibilityIdentifier;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(NSString *)modelIdentifier;
@end
