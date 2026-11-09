/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$TryGetBaseColor
bool Rotatelab_Marketing_Lego_LegoCubeMeshApplier__TryGetBaseColor (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, UnityEngine_Color_o* baseColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$TryGetBaseColor
   bool Rotatelab_Marketing_Lego_LegoCubeMeshApplier__TryGetBaseColor
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, UnityEngine_Color_o* baseColor, const
   MethodInfo* method); */

bool Rotatelab_Marketing_Lego_LegoCubeMeshApplier__TryGetBaseColor_106c9bc
               (undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_0107cc10 + 0x107c9d8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107cc14 + 0x107c9ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107cc18 + 0x107c9f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107cc1c + 0x107ca04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107cc20 + 0x107ca10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107cc24 + 0x107ca1c));
    *pcVar3 = '\x01';
  }
  uVar6 = 0;
  iStack_28 = 0;
  iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (param_1,1,**(undefined4 **)(_UNK_0107cc28 + 0x107ca38));
  puVar8 = *(undefined4 **)(_UNK_0107cc2c + 0x107ca5c);
  do {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(uint *)(iVar1 + 0xc);
    if ((int)uVar5 <= (int)uVar6) {
      *param_2 = 0;
      param_2[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_0107cba0:
      return (int)uVar6 < (int)uVar5;
    }
    if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = *(int *)(iVar1 + 0x10 + uVar6 * 4);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Object__get_name_36081bc(iVar7,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__StartsWith_2a097d0(iVar2,*puVar8,0);
    if (iVar2 != 0) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = UnityEngine_Component__TryGetComponent_object__14402fc
                        (iVar7,&iStack_28,**(undefined4 **)(_UNK_0107cc30 + 0x107cadc));
      if (iVar7 != 0) {
        if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = UnityEngine_Renderer__get_sharedMaterial_35c59b8(iStack_28,0);
        if (*(int *)(**(int **)(_UNK_0107cc34 + 0x107cb18) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar7,0,0);
        if (iVar2 != 0) {
          piVar4 = *(int **)(_UNK_0107cc38 + 0x107cb4c);
          iVar2 = *piVar4;
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            iVar2 = *piVar4;
          }
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = UnityEngine_Material__HasProperty_35c8130(iVar7,**(undefined4 **)(iVar2 + 0x5c),0)
          ;
          if (iVar2 != 0) {
            piVar4 = *(int **)(_UNK_0107cc3c + 0x107cbc0);
            iVar1 = *piVar4;
            if (*(int *)(iVar1 + 0x74) == 0) {
              FUN_00ec3934();
              iVar1 = *piVar4;
            }
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_Material__GetColor_35c7c58
                      (&uStack_38,iVar7,**(undefined4 **)(iVar1 + 0x5c),0);
            *param_2 = uStack_38;
            param_2[1] = uStack_34;
            param_2[2] = uStack_30;
            param_2[3] = uStack_2c;
            goto LAB_0107cba0;
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

