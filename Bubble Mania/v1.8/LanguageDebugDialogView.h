/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, UIPickerView, NSString;

@interface LanguageDebugDialogView : XibDialogView <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSArray* _languagesList;
	UIPickerView* _languagePicker;
	NSString* _selectedLanguage;

}

@property (nonatomic,retain) NSArray * languagesList;                    //@synthesize languagesList=_languagesList - In the implementation block
@property (nonatomic,retain) UIPickerView * languagePicker;              //@synthesize languagePicker=_languagePicker - In the implementation block
@property (nonatomic,copy) NSString * selectedLanguage;                  //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showLanguageDebugDialogView;
-(void)dismissed:(id)arg1 ;
-(void)changeButtonPressed;
-(void)populateLanguagesList;
-(NSArray *)languagesList;
-(void)setLanguagesList:(NSArray *)arg1 ;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(UIPickerView *)languagePicker;
-(NSString *)selectedLanguage;
-(void)setLanguagePicker:(UIPickerView *)arg1 ;
-(void)show;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)init;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
@end
