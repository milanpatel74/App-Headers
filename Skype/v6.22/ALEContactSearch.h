/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/ALEObjectInterface.h>

@interface ALEContactSearch : ALEObjectInterface {

	BOOL ownContactSearchObj;
	ContactSearchWrapper* contactsearchWrapper;

}
-(id)initWithoutSkylibObject;
-(void)createSkylibObject;
-(void*)skylibObj;
-(void)Extend;
-(void)GetResults:(id*)arg1 andFrom:(unsigned)arg2 andCount:(unsigned)arg3 ;
-(BOOL)IsValid;
-(void)Release;
-(BOOL)AddEmailTerm:(id)arg1 andAdd_to_subs:(BOOL)arg2 ;
-(BOOL)AddIntTerm:(int)arg1 andCond:(int)arg2 andValue:(unsigned)arg3 andAdd_to_subs:(BOOL)arg4 ;
-(BOOL)AddLanguageTerm:(id)arg1 andAdd_to_subs:(BOOL)arg2 ;
-(BOOL)AddMaxAgeTerm:(unsigned)arg1 andAdd_to_subs:(BOOL)arg2 ;
-(BOOL)AddMinAgeTerm:(unsigned)arg1 andAdd_to_subs:(BOOL)arg2 ;
-(void)AddOr;
-(BOOL)AddStrTerm:(int)arg1 andCond:(int)arg2 andValue:(id)arg3 andAdd_to_subs:(BOOL)arg4 ;
-(void)SetSupportedContactTypes:(unsigned)arg1 ;
-(void)Submit;
-(void)dealloc;
-(id)init;
@end
