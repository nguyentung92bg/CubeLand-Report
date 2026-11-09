/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* list, const MethodInfo_1489168* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array*
   Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* list, const MethodInfo_1489168*
   method); */

int * Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType__1489168
                (undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *apiStack_1c [3];
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01499200 + 0x149918c)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  if (*(int *)(**(int **)(_UNK_01499204 + 0x14991ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar2 = (int *)(*(code *)**(undefined4 **)(*(int *)(param_2 + 0x1c) + 4))(param_1);
  iVar3 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  piVar5 = (int *)0x0;
  piVar4 = piVar5;
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    iVar1 = func_0x00f1f8d4(iVar3,iVar6);
    piVar4 = piVar2;
    if ((iVar1 == 0) && (piVar4 = piVar5, (*(ushort *)(iVar6 + 0xbd) & 0x1000) != 0)) {
      if (((*(byte *)(iVar3 + 0xa0) & 0x20) != 0) ||
         (*(char *)(iVar3 + 0x16) == '\x1e' || *(char *)(iVar3 + 0x16) == '\x13')) {
        iVar1 = *(int *)(iVar3 + 0x38);
        if (iVar1 != 0) {
          piVar5 = *(int **)(iVar1 + 0x14);
        }
        if (iVar1 != 0 && piVar5 != (int *)0x0) {
          apiStack_1c[0] = (int *)func_0x00f0ac20(piVar2,piVar5);
          if (apiStack_1c[0] != (int *)0x0) {
            return piVar2;
          }
          iVar1 = (*(code *)**(undefined4 **)piVar2[2])((undefined4 *)piVar2[2],piVar5,apiStack_1c);
          if (-1 < iVar1) {
            iVar1 = func_0x00f0aca8(piVar2,piVar5,apiStack_1c[0]);
            if (iVar1 == 0) {
              (**(code **)(*apiStack_1c[0] + 8))();
              apiStack_1c[0] = (int *)func_0x00f0ac20(piVar2,piVar5);
            }
            if (apiStack_1c[0] != (int *)0x0) {
              return piVar2;
            }
          }
        }
      }
      piVar4 = piVar2;
      if (*(int *)(*(int *)(_UNK_00f00cd8 + 0xf00c44) + 8) != iVar3) {
        piVar4 = (int *)0x0;
      }
    }
  }
  return piVar4;
}

