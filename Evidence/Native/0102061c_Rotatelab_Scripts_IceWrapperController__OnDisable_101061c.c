/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnDisable
void Rotatelab_Scripts_IceWrapperController__OnDisable (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnDisable
   void Rotatelab_Scripts_IceWrapperController__OnDisable (Rotatelab_Scripts_IceWrapperController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__OnDisable_101061c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_010206c8 + 0x1020630);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010206cc + 0x1020644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010206d0 + 0x1020650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010206d4 + 0x102065c));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010206d8 + 0x1020670));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010206dc + 0x1020684));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_010206e0 + 0x10206a0),0)
  ;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01050ee0 + 0x1050e54);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050ee4 + 0x1050e68),uVar2,0);
    *pcVar5 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01050ee8 + 0x1050e80);
  iVar3 = *(int *)(iVar1 + 0xbc);
  do {
    iVar7 = 0;
    iVar4 = System_Delegate__Remove_2bbcc8c(iVar3,uVar2,0);
    if (iVar4 != 0) {
      uVar6 = *puVar8;
      iVar7 = thunk_FUN_00f00bc8(iVar4,uVar6);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar4,uVar6);
      }
    }
    iVar4 = FUN_00efd180((int *)(iVar1 + 0xbc),iVar7,iVar3);
    bVar9 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar9);
  return;
}

