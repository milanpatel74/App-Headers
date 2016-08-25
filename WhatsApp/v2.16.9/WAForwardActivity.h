/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol WAForwardPickerViewControllerDelegate;
@class NSArray, NSString;

@interface WAForwardActivity : UIActivity {

	NSArray* _items;
	NSString* _customActivityTitle;
	NSArray* _selectedContacts;
	long long _maximumItemCount;
	id<WAForwardPickerViewControllerDelegate> _pickerDelegate;
	NSArray* _requiredCapabilities;

}

@property (nonatomic,copy) NSString * activityTitle; 
@property (nonatomic,readonly) NSArray * selectedContacts;                                                 //@synthesize selectedContacts=_selectedContacts - In the implementation block
@property (assign,nonatomic) long long maximumItemCount;                                                   //@synthesize maximumItemCount=_maximumItemCount - In the implementation block
@property (assign,nonatomic,__weak) id<WAForwardPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * requiredCapabilities;                                                 //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
+(id)activityTitleForForwardingMessages:(id)arg1 ;
+(long long)activityCategory;
-(id)initWithMessages:(id)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(id)activityType;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(id)activitySettingsImage;
-(NSArray *)selectedContacts;
-(void)setActivityTitle:(NSString *)arg1 ;
-(NSArray *)requiredCapabilities;
-(id<WAForwardPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<WAForwardPickerViewControllerDelegate>)arg1 ;
-(long long)maximumItemCount;
-(void)setMaximumItemCount:(long long)arg1 ;
@end
