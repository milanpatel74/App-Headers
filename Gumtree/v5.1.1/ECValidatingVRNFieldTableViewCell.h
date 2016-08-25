/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECValidatingVehicleNumberFieldTableViewCell.h>

@class ECVRNView, UIButton, UILabel;

@interface ECValidatingVRNFieldTableViewCell : ECValidatingVehicleNumberFieldTableViewCell {

	ECVRNView* _vrnView;
	UIButton* _findButton;
	UILabel* _errorLabel;

}

@property (nonatomic,retain) ECVRNView * vrnView;                //@synthesize vrnView=_vrnView - In the implementation block
@property (nonatomic,retain) UIButton * findButton;              //@synthesize findButton=_findButton - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;               //@synthesize errorLabel=_errorLabel - In the implementation block
+(double)preferredCellHeight;
-(void)displayError:(id)arg1 ;
-(id)dataDictionary;
-(void)restoreDataDictionary:(id)arg1 ;
-(void)setVrnView:(ECVRNView *)arg1 ;
-(ECVRNView *)vrnView;
-(void)setFindButton:(UIButton *)arg1 ;
-(UIButton *)findButton;
-(void)findButtonTapped:(id)arg1 ;
-(void)vrnViewGoAction:(id)arg1 ;
-(void)updateFindButtonState;
-(void)showErrorWithMessage:(id)arg1 ;
-(id)accessibilityElementForValueInView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)hideError;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(void)focus:(BOOL)arg1 ;
@end
