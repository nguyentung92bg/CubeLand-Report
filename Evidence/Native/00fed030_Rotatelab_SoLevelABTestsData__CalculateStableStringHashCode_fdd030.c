/* IL2CPP: Rotatelab.SoLevelABTestsData$$CalculateStableStringHashCode
int32_t Rotatelab_SoLevelABTestsData__CalculateStableStringHashCode (Rotatelab_SoLevelABTestsData_o* __this, System_String_o* str, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SoLevelABTestsData$$CalculateStableStringHashCode
   int32_t Rotatelab_SoLevelABTestsData__CalculateStableStringHashCode
   (Rotatelab_SoLevelABTestsData_o* __this, System_String_o* str, const MethodInfo* method); */

int Rotatelab_SoLevelABTestsData__CalculateStableStringHashCode_fdd030
              (undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x1505;
  iVar2 = 0;
  uVar4 = 0x1505;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 8) <= iVar2) break;
    uVar1 = System_String__get_Chars_2a04790(param_2,iVar2,0);
    uVar4 = uVar4 * 0x21 ^ uVar1;
    if (iVar2 == *(int *)(param_2 + 8) + -1) break;
    uVar1 = System_String__get_Chars_2a04790(param_2,iVar2 + 1,0);
    iVar2 = iVar2 + 2;
    uVar3 = uVar3 * 0x21 ^ uVar1;
  }
  return uVar3 * 0x5d588b65 + uVar4;
}

