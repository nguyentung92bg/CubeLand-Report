/* IL2CPP: Rotatelab.Extensions$$ConvertAll<object, object>
System_Object_array* Rotatelab_Extensions__ConvertAll_object__object_ (System_Object_array* array, System_Converter_TInput__TOutput__o* converter, const MethodInfo_1484FD8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ConvertAll<object, object>
   System_Object_array* Rotatelab_Extensions__ConvertAll_object__object_ (System_Object_array*
   array, System_Converter_TInput__TOutput__o* converter, const MethodInfo_1484FD8* method); */

int Rotatelab_Extensions__ConvertAll_object__object__1484fd8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_3);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (param_1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164a698 + 0x164a644));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164a69c + 0x164a658);
  }
  else {
    if (param_2 != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = FUN_00ec388c(iVar1,*(undefined4 *)(param_1 + 0xc));
      uVar2 = *(uint *)(param_1 + 0xc);
      if (0 < (int)uVar2) {
        iVar6 = 0;
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          uVar3 = (**(code **)(param_2 + 0xc))
                            (*(undefined4 *)(param_2 + 0x20),
                             *(undefined4 *)(param_1 + 0x10 + uVar5 * 4),
                             *(undefined4 *)(param_2 + 0x14));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          *(undefined4 *)(iVar1 + 0x10 + uVar5 * 4) = uVar3;
          thunk_FUN_00ec5080(iVar1 + 0x10 + iVar6,uVar3);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 4;
        } while ((int)uVar5 < (int)uVar2);
      }
      return iVar1;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164a6a0 + 0x164a664));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164a6a4 + 0x164a678);
  }
  uVar4 = thunk_FUN_00f23fd0(uVar4);
  System_ArgumentNullException___ctor_2b08d00(uVar3,uVar4,0);
  func_0x00ec3920(uVar3,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

