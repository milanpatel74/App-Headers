/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNForm.h>

@class TFNFormField, TFNBooleanItem, TFNTwitterList;

@interface T1EditListDetailsForm : TFNForm {

	TFNFormField* _nameField;
	TFNFormField* _descriptionField;
	TFNBooleanItem* _privateItem;
	TFNTwitterList* _list;

}

@property (nonatomic,retain) TFNFormField * nameField;                     //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,retain) TFNFormField * descriptionField;              //@synthesize descriptionField=_descriptionField - In the implementation block
@property (nonatomic,readonly) TFNBooleanItem * privateItem;               //@synthesize privateItem=_privateItem - In the implementation block
@property (nonatomic,readonly) TFNTwitterList * list;                      //@synthesize list=_list - In the implementation block
-(BOOL)tracksEditsAndChanges;
-(TFNBooleanItem *)privateItem;
-(TFNFormField *)descriptionField;
-(void)setDescriptionField:(TFNFormField *)arg1 ;
-(id)sections;
-(TFNFormField *)nameField;
-(void)setNameField:(TFNFormField *)arg1 ;
-(id)initWithList:(id)arg1 ;
-(TFNTwitterList *)list;
@end
