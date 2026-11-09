/* IL2CPP: Rotatelab.ObservableBool$$get_Value
bool Rotatelab_ObservableBool__get_Value (Rotatelab_ObservableBool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableBool$$get_Value
   bool Rotatelab_ObservableBool__get_Value (Rotatelab_ObservableBool_o* __this, const MethodInfo*
   method); */

bool Rotatelab_ObservableBool__get_Value_fb2b74(void)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = Rotatelab_ObservableLong__get_Value_fb2b94();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  bVar2 = (int)uVar3 != 0;
  return (int)-(iVar1 + (uint)bVar2) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar2));
}

