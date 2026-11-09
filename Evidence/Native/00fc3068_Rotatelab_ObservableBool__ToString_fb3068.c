/* IL2CPP: Rotatelab.ObservableBool$$ToString
System_String_o* Rotatelab_ObservableBool__ToString (Rotatelab_ObservableBool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableBool$$ToString
   System_String_o* Rotatelab_ObservableBool__ToString (Rotatelab_ObservableBool_o* __this, const
   MethodInfo* method); */

void Rotatelab_ObservableBool__ToString_fb3068(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uStack_9;
  
  uStack_9 = 0;
  uVar3 = Rotatelab_ObservableLong__get_Value_fb2b94();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = (int)uVar3;
  uStack_9 = (int)-(iVar2 + (uint)(iVar1 != 0)) < 0 !=
             (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(iVar1 != 0)));
  iVar2 = *(int *)(*(int *)(_UNK_00fc30c0 + 0xfc3094) + 0x14);
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934(iVar2,0,-iVar1);
  }
  System_Boolean__ToString_2b14940(&uStack_9,0);
  return;
}

