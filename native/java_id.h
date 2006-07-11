#pragma once


extern JClassID com4j_COM4J;
extern JStaticMethodID<jint> com4j_COM4J_getPtr;

// reference to org.kohsuke.com4j.comexception
extern JClassID comexception;
extern JConstructorID comexception_new;
extern JConstructorID comexception_new_hr;
extern JClassID com4j_Holder;
extern jfieldID com4j_Holder_value;

extern JClassID com4j_Com4jObject;

extern JClassID com4j_Variant;
extern JConstructorID com4j_Variant_new;
extern JFieldID<jobject> com4j_Variant_image;

extern JClassID com4jWrapper;
extern JConstructorID com4jWrapper_new;
extern JMethodID<jobject> com4jWrapper_queryInterface;

extern JClassID javaLangClass;
extern JMethodID<jstring> javaLangClass_getName;

extern JClassID com4j_ComEnum;
extern JMethodID<jint> com4j_ComEnum_comEnumValue;

extern JClassID com4j_enumDictionary;
extern JStaticMethodID<jobject> com4j_enumDictionary_get;

extern JClassID javaLangObject;

extern JClassID javaMathBigInteger;
extern JMethodID<jstring> javaMathBigInteger_toString;
extern JConstructorID javaMathBigInteger_new;

extern JClassID javaMathBigDecimal;
extern JMethodID<jstring> javaMathBigDecimal_toString;
extern JConstructorID javaMathBigDecimal_new;
