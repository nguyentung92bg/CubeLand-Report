/* IL2CPP: Rotatelab.Save.SavedString$$.ctor
void Rotatelab_Save_SavedString___ctor (Rotatelab_Save_SavedString_o* __this, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedString$$.ctor
   void Rotatelab_Save_SavedString___ctor (Rotatelab_Save_SavedString_o* __this, System_String_o*
   key, System_String_o* defaultValue, const MethodInfo* method); */

void Rotatelab_Save_SavedString___ctor_1083154(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_010931ac + 0x1093170);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010931b0 + 0x1093184));
    *pcVar4 = '\x01';
  }
  Rotatelab_Save_SavedValue___ctor_1082f7c
            (param_1,0,param_3,**(undefined4 **)(_UNK_010931b4 + 0x10931a0),unaff_r4,unaff_r5,
             unaff_r6,unaff_lr);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  puVar3 = (undefined4 *)(param_1 + 0xc);
  *puVar3 = param_3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

