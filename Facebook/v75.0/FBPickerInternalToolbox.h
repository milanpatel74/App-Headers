/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPickerToolbox, FBPickerStateListenerAnnouncer;

@interface FBPickerInternalToolbox : NSObject {

	FBPickerToolbox* _pickerToolbox;
	FBPickerStateListenerAnnouncer* _stateAnnouncer;

}

@property (nonatomic,readonly) FBPickerToolbox * pickerToolbox;                              //@synthesize pickerToolbox=_pickerToolbox - In the implementation block
@property (nonatomic,readonly) FBPickerStateListenerAnnouncer * stateAnnouncer;              //@synthesize stateAnnouncer=_stateAnnouncer - In the implementation block
-(FBPickerStateListenerAnnouncer *)stateAnnouncer;
-(id)initWithStateAnnouncer:(id)arg1 pickerToolbox:(id)arg2 ;
-(FBPickerToolbox *)pickerToolbox;
@end

