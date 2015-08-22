/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBContactImporterAddressbookPerson, NSArray;

@interface FBUploadBulkContactChange : NSObject {

	NSString* _clientContactID;
	FBContactImporterAddressbookPerson* _abPerson;
	int _updateType;
	NSArray* _interactions;

}
-(id)_changeUpdateType;
-(id)_abPersonDictionaryForm:(id)arg1 ;
-(id)_abPersonEmailDictionaryForm:(id)arg1 ;
-(id)_abPersonPhoneDictionaryForm:(id)arg1 ;
-(id)_abPersonNameDictionaryForm:(id)arg1 ;
-(id)_abPersonBirthdayDictionaryForm:(id)arg1 ;
-(id)_abPersonEmailTypeToString:(int)arg1 ;
-(id)_abPersonPhoneTypeToString:(int)arg1 ;
-(id)initWithABPerson:(id)arg1 updateType:(int)arg2 interactions:(id)arg3 ;
-(id)dictionaryForm;
@end
