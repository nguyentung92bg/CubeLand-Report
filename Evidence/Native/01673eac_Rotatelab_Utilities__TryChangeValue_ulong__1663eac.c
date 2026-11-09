/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<ulong>
bool Rotatelab_Utilities__TryChangeValue_ulong_ (uint64_t* currentValue, uint64_t newValue, const MethodInfo_1663EAC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<ulong>
   bool Rotatelab_Utilities__TryChangeValue_ulong_ (uint64_t* currentValue, uint64_t newValue, const
   MethodInfo_1663EAC* method); */

uint Rotatelab_Utilities__TryChangeValue_ulong__1663eac
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  
  puVar1 = *(undefined4 **)(param_5 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00efd7c4(param_5);
    puVar1 = *(undefined4 **)(param_5 + 0x1c);
  }
  piVar2 = (int *)func_0x01684b64(*puVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = *(code **)(*piVar2 + 0x100);
  uVar3 = (*pcVar4)(piVar2,pcVar4,*param_1,param_1[1],param_3,param_4,
                    *(undefined4 *)(*piVar2 + 0x104));
  if (uVar3 == 0) {
    *param_1 = param_3;
    param_1[1] = param_4;
  }
  return uVar3 ^ 1;
}

