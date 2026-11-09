/* IL2CPP: Rotatelab.ObservableBool$$op_Implicit
bool Rotatelab_ObservableBool__op_Implicit (Rotatelab_ObservableBool_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableBool$$op_Implicit
   bool Rotatelab_ObservableBool__op_Implicit (Rotatelab_ObservableBool_o* instance, const
   MethodInfo* method); */

bool Rotatelab_ObservableBool__op_Implicit_fac238(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_ObservableLong__get_Value_fb2b94(param_1);
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  bVar2 = (int)uVar3 != 0;
  return (int)-(iVar1 + (uint)bVar2) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar2));
}

